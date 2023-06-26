/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 12:48:32 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/26 16:37:09 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "main.hpp"

std::string searchReplace(std::string original, const char *s, const char *r) {
    std::string search(s);
    std::string replace(r);
    size_t      pos;

    if (search.empty())
        return original;
    pos = original.find(search);
    while (pos + 1) {
        original.erase(pos, search.length());
        original.insert(pos, replace);
        pos = original.find(search, pos + replace.length());
    }
    return original;
}

int main(int argc, char *argv[])
{
    std::ifstream   inFile;
    std::ofstream   outFile;
    std::string     s1;
    std::string     out_name(argv[1]);
    if (argc == 4)
    {
        inFile.open(argv[1]);
        if (!inFile)
        {
            std::cout << "Error opening infile" << std::endl;
            return (0);
        }
        out_name.append(".replace");
        outFile.open(out_name.c_str(), std::ios::trunc);
        if (!outFile)
        {
            std::cout << "Error opening outfile" << std::endl;
            return (0);
        }
        std::string line;
        s1 = argv[2];
        while (std::getline(inFile, line))
        {
            while (line.find(s1) != std::string::npos)
                line = searchReplace(line, argv[2], argv[3]); 
            outFile << line << std::endl;
        }
        inFile.close();
        outFile.close();

    }
    else
        std::cout << "Wrong number of arguments" << std::endl;
    return (0);
}