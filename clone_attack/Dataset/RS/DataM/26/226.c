int main () {
    int nakfjVcPN6;
    int YSYh87D = 0;
    char Nzx6PhO4s3 [101];
    gets (Nzx6PhO4s3);
    for (nakfjVcPN6 = 0;; nakfjVcPN6 = nakfjVcPN6 + 1) {
        if (Nzx6PhO4s3[nakfjVcPN6] == 0)
            break;
        else if (Nzx6PhO4s3[nakfjVcPN6] == ' ' && YSYh87D == 0) {
            YSYh87D = YSYh87D +1;
            printf (" ");
        }
        else if (Nzx6PhO4s3[nakfjVcPN6] != ' ') {
            YSYh87D = 0;
            printf ("%c", Nzx6PhO4s3[nakfjVcPN6]);
        };
    }
    return 0;
}

