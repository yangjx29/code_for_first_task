int main () {
    char suYeJf9g [(359 - 103)];
    gets (suYeJf9g);
    char *PxFAmlCphLi;
    int JSE2oOZ6;
    int tjGbQDaL9rno;
    int ixLwJ7Vh4uBP;
    char xmNMvr2cfzt [(586 - 326)];
    char IJICBA1nEbrQ [(531 - 11)];
    char NPNBgMuCFT [(1096 - 836)];
    gets (NPNBgMuCFT);
    gets (xmNMvr2cfzt);
    int JOeghMT;
    int s7wrIq6lLtYJ;
    int pwvo93gWV8x;
    tjGbQDaL9rno = strlen (suYeJf9g);
    JOeghMT = strlen (NPNBgMuCFT);
    pwvo93gWV8x = strlen (xmNMvr2cfzt);
    PxFAmlCphLi = strstr (suYeJf9g, NPNBgMuCFT);
    if (!(NULL != PxFAmlCphLi))
        printf ("%s", suYeJf9g);
    else {
        JSE2oOZ6 = PxFAmlCphLi -&suYeJf9g[(472 - 472)];
        for (s7wrIq6lLtYJ = (573 - 573); s7wrIq6lLtYJ < JSE2oOZ6; s7wrIq6lLtYJ = s7wrIq6lLtYJ + 1)
            IJICBA1nEbrQ[s7wrIq6lLtYJ] = suYeJf9g[s7wrIq6lLtYJ];
        for (s7wrIq6lLtYJ = (727 - 727); pwvo93gWV8x > s7wrIq6lLtYJ; s7wrIq6lLtYJ = s7wrIq6lLtYJ + 1)
            IJICBA1nEbrQ[JSE2oOZ6 +s7wrIq6lLtYJ] = xmNMvr2cfzt[s7wrIq6lLtYJ];
        ixLwJ7Vh4uBP = JSE2oOZ6 +pwvo93gWV8x;
        for (s7wrIq6lLtYJ = (886 - 886); JSE2oOZ6 +JOeghMT+s7wrIq6lLtYJ <= tjGbQDaL9rno; s7wrIq6lLtYJ = s7wrIq6lLtYJ + 1)
            IJICBA1nEbrQ[ixLwJ7Vh4uBP + s7wrIq6lLtYJ] = suYeJf9g[JSE2oOZ6 +JOeghMT+s7wrIq6lLtYJ];
        printf ("%s", IJICBA1nEbrQ);
    }
    return (726 - 726);
}

