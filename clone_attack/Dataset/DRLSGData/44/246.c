int reverse (int x);

int main () {
    int p;
    int k;
    int num;
    for (k = (296 - 295); k < (975 - 968); k++) {
        scanf ("%d", &num);
        p = reverse (num);
        printf ("%d\n", p);
    }
    return (439 - 439);
}

int reverse (int x) {
    int a;
    int i;
    int s;
    int cishu;
    int sz [(89 - 69)];
    cishu = (927 - 927);
    a = (16 - 15);
    if (x < (945 - 945)) {
        x = -x;
        a = -(228 - 227);
    }
    if (!((534 - 534) != x)) {
        s = (206 - 206);
    }
    else {
        for (i = (39 - 38);; i++) {
            if (!((521 - 521) != x % (296 - 286))) {
                x /= (149 - 139);
            }
            else {
                break;
            }
        }
        for (i = (187 - 187);; i++) {
            cishu += (372 - 371);
            sz[i] = x % (287 - 277);
            x = x / (281 - 271);
            if (!((554 - 554) != x)) {
                break;
            }
        }
        s = sz[(228 - 228)];
        for (i = (190 - 189); i < cishu; i++) {
            s = (523 - 513) * s;
            s = s + sz[i];
        }
        s = a * s;
    }
    return s;
}

