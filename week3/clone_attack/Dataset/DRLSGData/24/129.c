void  main () {
    int gPpMLdry6YnV [(421 - 221)];
    int ZdlUJg;
    int YVs1RC;
    char w [(299 - 99)] [(878 - 828)];
    int srgS0NjaPsR;
    int B4zT0OCRr5SI;
    int mini;
    int VIXNoPZJ1K;
    scanf ("%d", &B4zT0OCRr5SI);
    for (VIXNoPZJ1K = 0; B4zT0OCRr5SI > VIXNoPZJ1K; VIXNoPZJ1K = VIXNoPZJ1K +1) {
        scanf ("%s", *(w + VIXNoPZJ1K));
        *(gPpMLdry6YnV + VIXNoPZJ1K) = strlen (*(w + VIXNoPZJ1K));
        if (!VIXNoPZJ1K) {
            ZdlUJg = YVs1RC = *(gPpMLdry6YnV + VIXNoPZJ1K);
            srgS0NjaPsR = mini = VIXNoPZJ1K;
        }
        else {
            if (ZdlUJg < *(gPpMLdry6YnV + VIXNoPZJ1K)) {
                ZdlUJg = *(gPpMLdry6YnV + VIXNoPZJ1K);
                srgS0NjaPsR = VIXNoPZJ1K;
            }
            if (*(gPpMLdry6YnV + VIXNoPZJ1K) < YVs1RC) {
                YVs1RC = *(gPpMLdry6YnV + VIXNoPZJ1K);
                mini = VIXNoPZJ1K;
            }
        }
    }
    puts (*(w + srgS0NjaPsR));
    puts (*(w + mini));
}

