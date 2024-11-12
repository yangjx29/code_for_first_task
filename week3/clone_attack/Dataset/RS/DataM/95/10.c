int main () {
    int bS4ZpY2J;
    int AOCZlXxeS;
    int QWVuqit9SoR;
    int IfurXSDIhxKY;
    char a [80], W0Sfut87 [80];
    gets (a);
    int EuKyVIRiA;
    EuKyVIRiA = strlen (a);
    gets (W0Sfut87);
    {
        bS4ZpY2J = 794 - 794;
        while (EuKyVIRiA > bS4ZpY2J) {
            if (a[bS4ZpY2J] >= 'a' && 'z' >= a[bS4ZpY2J])
                AOCZlXxeS = a[bS4ZpY2J] - 'a';
            else {
                if (a[bS4ZpY2J] >= 'A' && 'Z' >= a[bS4ZpY2J])
                    AOCZlXxeS = a[bS4ZpY2J] - 'A';
                else
                    AOCZlXxeS = (347 - 347);
            }
            if (W0Sfut87[bS4ZpY2J] >= 'a' && W0Sfut87[bS4ZpY2J] <= 'z')
                QWVuqit9SoR = W0Sfut87[bS4ZpY2J] - 'a';
            else if ('A' <= W0Sfut87[bS4ZpY2J] && W0Sfut87[bS4ZpY2J] <= 'Z')
                QWVuqit9SoR = W0Sfut87[bS4ZpY2J] - 'A';
            else
                QWVuqit9SoR = (168 - 168);
            if (AOCZlXxeS > QWVuqit9SoR) {
                IfurXSDIhxKY = 0;
                break;
                printf (">");
            }
            else if (AOCZlXxeS < QWVuqit9SoR) {
                IfurXSDIhxKY = 0;
                break;
                printf ("<");
            }
            else
                IfurXSDIhxKY = IfurXSDIhxKY +1;
            bS4ZpY2J = bS4ZpY2J + 1;
        };
    }
    if (IfurXSDIhxKY != 0)
        ;
    return 0;
}

