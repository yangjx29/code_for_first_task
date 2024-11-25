int main () {
    char s [101];
    char s1 [101];
    int i;
    int rAV73IW0g;
    char *C1yhs8YS;
    char *B3UvI1Tumn96;
    gets (s);
    puts (s1);
    B3UvI1Tumn96 = s1;
    rAV73IW0g = strlen (s);
    for (i = 0; i < rAV73IW0g; i++) {
        *(B3UvI1Tumn96 +i) = *(C1yhs8YS +i) + *(C1yhs8YS +i + 1);
    }
    C1yhs8YS = s;
    *(B3UvI1Tumn96 +rAV73IW0g - 1) = *(C1yhs8YS +rAV73IW0g - 1) + *C1yhs8YS;
    *(B3UvI1Tumn96 +rAV73IW0g) = '\0';
    return 0;
}

