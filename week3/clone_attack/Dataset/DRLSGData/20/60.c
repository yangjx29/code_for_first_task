int main () {
    char UVymtUk2G0N [11];
    char IkVQIzx [4];
    char KbmAQCzs [15];
    for (; scanf ("%s", UVymtUk2G0N) != EOF;) {
        char *PBGTsx5hAkDb;
        int jWE0S6UCkv;
        char *ZU6OkmStT8, *QX26Zq, *ILUQGyd;
        scanf ("%s", IkVQIzx);
        QX26Zq = IkVQIzx;
        ZU6OkmStT8 = UVymtUk2G0N;
        jWE0S6UCkv = strlen (UVymtUk2G0N);
        PBGTsx5hAkDb = ZU6OkmStT8;
        for (; ZU6OkmStT8 < UVymtUk2G0N +jWE0S6UCkv; ZU6OkmStT8++)
            if (*ZU6OkmStT8 > *PBGTsx5hAkDb)
                PBGTsx5hAkDb = ZU6OkmStT8;
        for (ZU6OkmStT8 = UVymtUk2G0N, ILUQGyd = KbmAQCzs; ZU6OkmStT8 <= PBGTsx5hAkDb; ZU6OkmStT8++, ILUQGyd++)
            *ILUQGyd = *ZU6OkmStT8;
        for (QX26Zq = IkVQIzx; (IkVQIzx +3) > QX26Zq; QX26Zq++, ILUQGyd++)
            *ILUQGyd = *QX26Zq;
        for (; ZU6OkmStT8 < (UVymtUk2G0N +jWE0S6UCkv); ZU6OkmStT8++, ILUQGyd++)
            *ILUQGyd = *ZU6OkmStT8;
        *ILUQGyd = '\0';
        printf ("%s\n", KbmAQCzs);
    }
    return 0;
}

