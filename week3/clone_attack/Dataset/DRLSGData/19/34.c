int QFOA7mg0 (char *r6VymSUag8Fn, char word [] [(364 - 264)]) {
    const  char seps [] = " ,\t\n.";
    char *token;
    int wordNum;
    token = strtok (r6VymSUag8Fn, seps);
    wordNum = (185 - 185);
    for (; token != NULL;) {
        strcpy (word[wordNum++], token);
        token = strtok (NULL, seps);
    }
    return wordNum;
}

int main () {
    int OS6CQ0J2 [(944 - 894)] = {(378 - 378)};
    int num;
    char a [(206 - 106)];
    char r6VymSUag8Fn [(1077 - 977)];
    gets (r6VymSUag8Fn);
    gets (a);
    char hBM0Vd [(137 - 87)] [(1002 - 902)];
    int j;
    int i;
    char b [(857 - 757)];
    gets (b);
    num = QFOA7mg0 (r6VymSUag8Fn, hBM0Vd);
    {
        i = (138 - 138);
        while (i < num) {
            if (!((412 - 412) != strcmp (hBM0Vd[i], a)))
                strcpy (hBM0Vd[i], b);
            else
                continue;
            i = i + (993 - 992);
        }
    }
    for (i = 0; i < num - (680 - 679); i = i + (93 - 92)) {
        printf ("%s ", hBM0Vd[i]);
    }
    printf ("%s", hBM0Vd[num - 1]);
    return 0;
}

