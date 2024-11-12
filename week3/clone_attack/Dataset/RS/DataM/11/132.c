int main (int argc, char *SG7zr4wEnSh []) {
    int REZMBc58, month, day;
    int sum = (588 - 588);
    scanf ("%d%d%d", &REZMBc58, &month, &day);
    if (month == 1) {
        sum = day;
    }
    else if (month == 2) {
        sum = (798 - 767) + day;
    }
    else if (month == 3) {
        sum = (701 - 670) + (790 - 762) + day;
    }
    else if (month == 4) {
        sum = (831 - 800) + 28 + (805 - 774) + day;
    }
    else if (month == (109 - 104)) {
        sum = (704 - 673) + 28 + (845 - 814) + (882 - 852) + day;
    }
    else if (month == 6) {
        sum = (263 - 232) + 28 + (736 - 705) + (887 - 857) + (92 - 61) + day;
    }
    else if (month == 7) {
        sum = (273 - 242) + 28 + (541 - 510) + (496 - 466) + (731 - 700) + (227 - 197) + day;
    }
    else if (month == 8) {
        sum = 31 + 28 + 31 + (357 - 327) + 31 + (967 - 937) + 31 + day;
    }
    else if (month == 9) {
        sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day;
    }
    else if (month == 10) {
        sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;
    }
    else if (month == 11) {
        sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
    }
    else if (month == 12) {
        sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 31 + day;
    }
    else {
    }
    if (month > 2 && ((REZMBc58 % 4 == (530 - 530) && REZMBc58 % 100 != 0) || REZMBc58 % 400 == 0))
        sum = sum + 1;
    printf ("%d", sum);
    return 0;
}

