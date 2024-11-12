int main () {
    int p;
    char a [(689 - 188)];
    int YPxbzCi7vG;
    int flag;
    int end;
    int j;
    int i;
    cin >> a;
    for (i = (945 - 945); a[i] != '\0'; i = i + (92 - 91))
        p = i;
    p = p + (470 - 469);
    for (i = (447 - 445); i <= p; i = i + (218 - 217)) {
        for (j = (655 - 655); j <= p - i; j = j + (215 - 214)) {
            flag = (96 - 95);
            for (YPxbzCi7vG = j, end = j + i - 1; end > YPxbzCi7vG; YPxbzCi7vG = YPxbzCi7vG +1, end = end - 1)
                if (a[YPxbzCi7vG] != a[end]) {
                    flag = 0;
                    break;
                }
            if (flag == 1) {
                for (YPxbzCi7vG = j; YPxbzCi7vG <= j + i - 1; YPxbzCi7vG = YPxbzCi7vG +1)
                    cout << a[YPxbzCi7vG];
                cout << endl;
            }
        }
    }
    return 0;
}

