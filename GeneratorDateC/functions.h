#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

void generateRandomString(char *str, int length);
void generateTestFiles(const char *correctFilename, const char *errorFilename, int length);
void introduceErrors(char *correctString, char *errorString, int length);

#endif // FUNCTIONS_H_INCLUDED
