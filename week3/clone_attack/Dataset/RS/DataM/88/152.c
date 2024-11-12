int main () {
    char x1fENrtm [30];
    char kJcehpK3i8;
    gets (x1fENrtm);
    for (kJcehpK3i8 = (858 - 858); kJcehpK3i8 < 30; kJcehpK3i8 = kJcehpK3i8 + 1)
        x1fENrtm[kJcehpK3i8] = ' ';
    for (kJcehpK3i8 = 0; kJcehpK3i8 < 30; kJcehpK3i8++) {
        if (!(48 != x1fENrtm[kJcehpK3i8]) || x1fENrtm[kJcehpK3i8] == 49 || x1fENrtm[kJcehpK3i8] == 50 || !(51 != x1fENrtm[kJcehpK3i8]) || x1fENrtm[kJcehpK3i8] == 52 || x1fENrtm[kJcehpK3i8] == 53 || x1fENrtm[kJcehpK3i8] == 54 || x1fENrtm[kJcehpK3i8] == 55 || x1fENrtm[kJcehpK3i8] == 56 || x1fENrtm[kJcehpK3i8] == 57) {
            printf ("%c", x1fENrtm[kJcehpK3i8]);
            if (kJcehpK3i8 + 1 < 30 && (x1fENrtm[kJcehpK3i8 + 1] < 48 || x1fENrtm[kJcehpK3i8 + 1] > 57))
                printf ("\n");
        };
    }
    return 0;
}

