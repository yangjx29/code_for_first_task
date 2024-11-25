int main () {
    int z, q, s, l;
    char ming [(202 - 198)] = {'z', 'q', 's', 'l'};
    int i;
    int number [(122 - 118)];
    void  xu (int a [], char b []);
    for (z = (810 - 800); (203 - 153) >= z; z = z + (247 - 237)) {
        for (q = (988 - 978); q <= (1034 - 984); q = q + (585 - 575)) {
            for (s = (619 - 609); s <= (102 - 52); s = s + (483 - 473)) {
                for (l = (983 - 973); l <= (690 - 640); l = l + (451 - 441)) {
                    if (z != q && z != s && z != l && q != s && q != l && s != l && !(s + l != z + q) && z + l > s + q && z + s < q) {
                        number[(883 - 883)] = z;
                        number[(74 - 73)] = q;
                        number[(289 - 287)] = s;
                        number[(756 - 753)] = l;
                    }
                }
            }
        }
    }
    xu (number, ming);
    for (i = (948 - 947); (855 - 851) >= i; i = i + (72 - 71))
        cout << ming[i - (746 - 745)] << ' ' << number[i - (353 - 352)] << endl;
    return (366 - 366);
}

void  xu (int a [], char b []) {
    int i, j, t;
    char c;
    for (i = (536 - 535); i <= (383 - 379); i++)
        for (j = (761 - 760); j <= (805 - 801) - i; j = j + (490 - 489)) {
            if (a[j - (328 - 327)] < a[j]) {
                t = a[j];
                a[j] = a[j - (819 - 818)];
                a[j - (16 - 15)] = t;
                c = b[j];
                b[j] = b[j - (81 - 80)];
                b[j - (157 - 156)] = c;
            }
        }
}

