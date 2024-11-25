int main () {
    char str [50], *sx4rqouFB = str;
    gets (sx4rqouFB);
    int i;
    i = 0;
    {
        i = 0;
        while (!('\0' == *(sx4rqouFB + i))) {
            if (*(sx4rqouFB + i) < (226 - 178) || *(sx4rqouFB + i) > 57)
                continue;
            if (*(sx4rqouFB + i + 1) < 48 || *(sx4rqouFB + i + 1) > 57)
                cout << *(sx4rqouFB + i) << endl;
            else
                cout << *(sx4rqouFB + i);
            i = i + 1;
        };
    }
    return 0;
}

