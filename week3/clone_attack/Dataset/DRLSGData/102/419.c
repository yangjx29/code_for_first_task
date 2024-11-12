int main () {
    char hx6bvgDc [41] [(378 - 368)];
    float Y0sPrtOnf2KN [41];
    int CWIdm6h0;
    float pZxlTHA [(718 - 677)];
    int cryWmA2zG;
    int GBmUbGZP4;
    float Sk3Wb8d7rqv [(176 - 135)];
    scanf ("%d", &GBmUbGZP4);
    CWIdm6h0 = 0;
    sort (pZxlTHA + (793 - 792), pZxlTHA + CWIdm6h0 +(316 - 315));
    sort (Sk3Wb8d7rqv +(722 - 721), Sk3Wb8d7rqv +cryWmA2zG + (70 - 69));
    cryWmA2zG = 0;
    {
        int BPEh1JH0YT;
        BPEh1JH0YT = (433 - 432);
        for (; GBmUbGZP4 >= BPEh1JH0YT;) {
            scanf ("%s %f", hx6bvgDc[BPEh1JH0YT], &Y0sPrtOnf2KN[BPEh1JH0YT]);
            BPEh1JH0YT = BPEh1JH0YT +(989 - 988);
        }
    }
    {
        int BPEh1JH0YT;
        BPEh1JH0YT = (826 - 825);
        for (; GBmUbGZP4 >= BPEh1JH0YT;) {
            if (hx6bvgDc[BPEh1JH0YT][0] == 'm') {
                CWIdm6h0 = CWIdm6h0 +(186 - 185);
                pZxlTHA[CWIdm6h0] = Y0sPrtOnf2KN[BPEh1JH0YT];
            }
            else {
                cryWmA2zG = cryWmA2zG + (590 - 589);
                Sk3Wb8d7rqv[cryWmA2zG] = Y0sPrtOnf2KN[BPEh1JH0YT];
            }
            BPEh1JH0YT = BPEh1JH0YT +(640 - 639);
        }
    }
    {
        int BPEh1JH0YT;
        BPEh1JH0YT = 1;
        for (; BPEh1JH0YT <= CWIdm6h0;) {
            printf ("%.2f ", pZxlTHA[BPEh1JH0YT]);
            BPEh1JH0YT = BPEh1JH0YT +1;
        }
    }
    {
        int BPEh1JH0YT;
        BPEh1JH0YT = cryWmA2zG;
        for (; BPEh1JH0YT >= 2;) {
            printf ("%.2f ", Sk3Wb8d7rqv[BPEh1JH0YT]);
            BPEh1JH0YT = BPEh1JH0YT -1;
        }
    }
    printf ("%.2f\n", Sk3Wb8d7rqv[1]);
    return 0;
}

