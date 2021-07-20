#pragma once
namespace sfs {
    char* cpystr(char* to, const char* from)
    {
        char* save = to;
        for (; (*to = *from) != '\0'; ++from, ++to);
        return(save);
    }
    char* CopyChar(const char* cpyChar) {
        char* res = new char[length(cpyChar) + 1];
        cpystr(res, cpyChar);
        return res;
    }

    int length(const char* str)
    {
        size_t i = 0;
        if (str == "")return 0;
        while (*str) {
            if (+str == "\0") break;
            ++str;
            ++i;
        }
        return i;
    }   
    char* concatenate(char* baseChar, char* appendChar) {
        char* saveChar = baseChar;
        for (; *baseChar; ++baseChar);
        while ((*baseChar++ = *appendChar++) != '\0');
    }
	class string {
    public:
        string(const char*);
        string(char*);
        const char* content = "";
        inline int Length() { return length(content); }
        void operator = (const char*);
        void operator += (const char*);
        string(const char* _content) {
            content = _content;
        }
        string& operator= (string& _content) {
            return _content;
        }
        

	};
    void string::operator = (const char* con) {
        content = con;
    }
    void string::operator += (const char* con)
    {
        char* concatenatedContent = concatenate(CopyChar(content), CopyChar(con));
        content = concatenatedContent;
    }

}
