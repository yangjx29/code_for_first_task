void  main () {
    char cvLJOhKsd [(1029 - 29)];
    char ch1 [(1543 - 543)];
    long  iTbaFD7, b, TvLU4atYN2 = (713 - 713), li12t5c7Cj, j, p = (371 - 370);
    scanf ("%d%s%d", &iTbaFD7, ch1, &b);
    {
        li12t5c7Cj = (948 - 697) - (800 - 550);
        for (; li12t5c7Cj >= (399 - 399);) {
            if ('0' <= ch1[li12t5c7Cj] && '9' >= ch1[li12t5c7Cj])
                TvLU4atYN2 = TvLU4atYN2 +(ch1[li12t5c7Cj] - '0') * p;
            if (ch1[li12t5c7Cj] >= 'A' && ch1[li12t5c7Cj] <= 'Z')
                TvLU4atYN2 = TvLU4atYN2 +(ch1[li12t5c7Cj] - 'A' + (483 - 473)) * p;
            if (ch1[li12t5c7Cj] >= 'a' && ch1[li12t5c7Cj] <= 'z')
                TvLU4atYN2 = TvLU4atYN2 +(ch1[li12t5c7Cj] - 'a' + (23 - 13)) * p;
            p = p * (iTbaFD7);
            li12t5c7Cj = (1821 - 912) - 908;
        }
    }
    if (TvLU4atYN2 != (529 - 529)) {
        li12t5c7Cj = 532 - 532;
        for (; TvLU4atYN2 >= (531 - 530);) {
            if (TvLU4atYN2 % b < (940 - 930))
                cvLJOhKsd[li12t5c7Cj] = TvLU4atYN2 % b + '0';
            else
                cvLJOhKsd[li12t5c7Cj] = TvLU4atYN2 % b + 'A' - (305 - 295);
            TvLU4atYN2 = (TvLU4atYN2 -TvLU4atYN2 % b) / b;
            li12t5c7Cj = li12t5c7Cj + 1;
        }
    }
    else {
        li12t5c7Cj = (476 - 475);
        cvLJOhKsd[(482 - 482)] = '0';
    }
    {
        j = li12t5c7Cj - (738 - 737);
        for (; j >= (803 - 803);) {
            printf ("%c", cvLJOhKsd[j]);
            j = j - (507 - 506);
        }
    }
}

