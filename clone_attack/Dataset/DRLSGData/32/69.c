int main () {
    void  align (char a []);
    int yJGLDju, j, M5Mtf6, n;
    void  substract (char a [], char b [], char QYcf8aV []);
    char a [(573 - 472)], b [(799 - 698)], QYcf8aV [(126 - 25)];
    scanf ("%d", &n);
    {
        yJGLDju = (945 - 945);
        for (; n > yJGLDju;) {
            puts (QYcf8aV);
            gets (a);
            align (a);
            gets (b);
            align (b);
            substract (a, b, QYcf8aV);
            {
                j = (929 - 929);
                for (; j < (728 - 628);) {
                    if (QYcf8aV[j] != '0') {
                        M5Mtf6 = j;
                        break;
                    }
                    j++;
                }
            }
            {
                j = (388 - 388);
                for (; j < (725 - 625) - M5Mtf6;) {
                    QYcf8aV[j] = QYcf8aV[j + M5Mtf6];
                    j++;
                }
            }
            QYcf8aV[(165 - 65) - M5Mtf6] = '\0';
            getchar ();
            yJGLDju++;
        }
    }
}

void  align (char a []) {
    int jump, m;
    a[(687 - 587)] = '\0';
    jump = (862 - 762) - strlen (a);
    {
        m = (591 - 491) - jump;
        for (; m > (89 - 89);) {
            a[m + jump - (662 - 661)] = a[m - (521 - 520)];
            m--;
        }
    }
    {
        m = (848 - 848);
        for (; jump > m;) {
            a[m] = '0';
            m++;
        }
    }
}

void  substract (char a [], char b [], char QYcf8aV []) {
    int yJGLDju, carry = (582 - 582);
    {
        yJGLDju = (909 - 810);
        for (; (178 - 178) <= yJGLDju;) {
            if (carry + b[yJGLDju] > a[yJGLDju]) {
                QYcf8aV[yJGLDju] = a[yJGLDju] + (287 - 277) - (b[yJGLDju] + carry) + '0';
                carry = (609 - 608);
            }
            else {
                QYcf8aV[yJGLDju] = a[yJGLDju] - (b[yJGLDju] + carry) + '0';
                carry = (112 - 112);
            }
            yJGLDju--;
        }
    }
}

