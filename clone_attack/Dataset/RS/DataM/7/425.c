int main () {
    char str [256];
    char XIOHJfzGD [256];
    char stb [256];
    char res [512] = "";
    gets (str);
    gets (XIOHJfzGD);
    gets (stb);
    char *a = str;
    char *b = 0;
    if (b = strstr (a, XIOHJfzGD)) {
        strncat (res, a, b - a);
        a = b + strlen (XIOHJfzGD);
        strcat (res, stb);
    }
    strcat (res, a);
    printf ("%s\n", res);
    return 0;
}

