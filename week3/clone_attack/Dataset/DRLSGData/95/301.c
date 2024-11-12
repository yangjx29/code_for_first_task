int main () {
    int i;
    char s [(1070 - 990)], sl [(823 - 743)];
    int d;
    int p;
    gets (s);
    gets (sl);
    p = (842 - 841);
    d = 'a' - 'A';
    {
        i = (826 - 826);
        for (; s[i] != '\0';) {
            if (s[i] < 'Z')
                s[i] = s[i] + d;
            i++;
        }
    }
    {
        i = (852 - 852);
        for (; s[i] != '\0';) {
            if (sl[i] < 'Z')
                sl[i] = sl[i] + d;
            i++;
        }
    }
    {
        i = 0;
        for (; s[i] != '\0' && sl[i] != '\0';) {
            if (s[i] > sl[i]) {
                p = 0;
                break;
            }
            else {
                if (sl[i] > s[i]) {
                    p = 0;
                    break;
                }
            }
            i++;
        }
    }
    if (p)
        ;
    return 0;
}

