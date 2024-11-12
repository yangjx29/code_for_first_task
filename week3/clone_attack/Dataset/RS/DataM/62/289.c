int main () {
    char NojR7hTULky4 [202];
    int m = 0;
    int YYUlmykgX;
    int TtN2bvxkoKR = 0;
    char wtE56z [202];
    gets (wtE56z);
    YYUlmykgX = strlen (wtE56z);
    {
        int gryPM32 = 0;
        while (gryPM32 < YYUlmykgX) {
            if (!(wtE56z[gryPM32] == ' ' && wtE56z[gryPM32 + 1] == ' ')) {
                NojR7hTULky4[TtN2bvxkoKR] = wtE56z[gryPM32];
                TtN2bvxkoKR = TtN2bvxkoKR +1;
            }
            gryPM32 = gryPM32 + 1;
        };
    }
    NojR7hTULky4[TtN2bvxkoKR] = '\0';
    printf ("%s", NojR7hTULky4);
    return 0;
}

