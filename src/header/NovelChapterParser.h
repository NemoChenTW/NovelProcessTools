/*
 * NovelChapterParser.h
 *
 *  Created on: 2014年11月28日
 *      Author: nemo
 */

#ifndef NOVELCHAPTERPARSER_H_
#define NOVELCHAPTERPARSER_H_

#include <string>
#include <fstream>
#include <regex>
#include <list>

#include "Utility/FileUtils.h"

using namespace std;

class NovelChapterParser {
public:
	NovelChapterParser(string filePath);
	virtual ~NovelChapterParser();

	///		Open file
	int fileOpen();

	///		Close file
	void fileClosed();

	///		Set regular expression.
	void setRegularExp(string regularExpression);

	///		Parse the novel chapter.
	void parseChapter();

private:
	string 		_novelPath;		///< The novel path.
	fstream 	_fileInStream;	///< The file input stream.
	fstream 	_fileOutStream;	///< The file out stream.

	list<regex> _regexList;		///< Regular expression list.

	void outputContents(string contents);		///< Output contents to the new file.

};

#endif /* NOVELCHAPTERPARSER_H_ */
