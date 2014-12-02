#include <sys/stat.h>

inline bool is_file(const std::string& filepath)
{
	struct stat buffer;
	if (stat (filepath.c_str(), &buffer) != 0) return false;
	return ((buffer.st_mode & S_IFREG) != 0);
}