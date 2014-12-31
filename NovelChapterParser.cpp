/*
 * main.cpp
 *
 *  Created on: 2014年11月28日
 *      Author: nemo
 */


#include <iostream>
#include <string>
#include <regex>
#include <sstream>

#include "src/libNovelChapterParser.h"

using namespace std;

int main(int argc, char* argv[])
{
	NovelChapterParser novelParser;
	//TODO Load RegExp from file.
	novelParser.setRegularExp("楔.*子.*");
	novelParser.setRegularExp("第[0-9]+章.*");
	novelParser.setRegularExp("第[零一二三四五六七八九十百千零壹貳參肆伍陸柒捌玖拾佰仟]+章.*");

	novelParser.parseChapter();

//	try
//	{
//		stringstream tmpSS;
//
//		regex reg("第[0-9]+章.*");
//		std::string s = "第1365章 神魔遮天 QQ 第1366章 GG \n第1367章 GG惹";
//
//		smatch mat;
//		std::cout << "Matched: " << regex_search(s, mat, reg) << std::endl;
//
//		cout << *(mat.begin()) << endl;
//
//
//		ssub_match prefix = mat.prefix();
//		std::string str_prefix(prefix.first, prefix.second);
//		std::cout << "Prefix: " << str_prefix << std::endl;
//		std::cout << "Length: " << prefix.length() << std::endl;
//
//	}
//	catch (const regex_error& e)
//	{
//		std::cout << "Error: " << e.what() << std::endl;
//	}

	return 0;
}
