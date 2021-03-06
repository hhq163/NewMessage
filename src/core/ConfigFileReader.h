/*
 * CConfigFileReader.h
 *
 *  Created on: 2016年5月25日
 *      Author: hhq163
 */

#ifndef SRC_CORE_CONFIGFILEREADER_H_
#define SRC_CORE_CONFIGFILEREADER_H_

#include "Util.h"

class CConfigFileReader
{
public:
	CConfigFileReader(const char* filename);
	~CConfigFileReader();

    char* GetConfigName(const char* name);
    int SetConfigValue(const char* name, const char*  value);
private:
    void _LoadFile(const char* filename);
    int _WriteFIle(const char*filename = NULL);
    void _ParseLine(char* line);
    char* _TrimSpace(char* name);

    bool m_load_ok;
    map<string, string> m_config_map;
    string m_config_file;
};

#endif /* SRC_CORE_CONFIGFILEREADER_H_ */
