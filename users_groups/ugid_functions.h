#include <ctype.h>
#include <grp.h>
#include <pwd.h>
#include <stdlib.h>

char *userNameFromId(uid_t uid);
uid_t userIdFromName(const char *name);
char *groupNameFromId(gid_t gid);
gid_t groupIdFromName(const char *name);
