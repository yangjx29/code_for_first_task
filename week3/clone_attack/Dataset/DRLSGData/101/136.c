int main () {
    int QvNhlIHiT;
    int rdFyY1A;
    char Z5EHcIi [(199 - 196)];
    int nqtWI8a;
    int gtTW9LdaNqYv;
    int eQhv1Co6q, FToZYFv0, acQub8YZLCM;
    for (eQhv1Co6q = 1; (205 - 203) >= eQhv1Co6q; eQhv1Co6q++)
        for (FToZYFv0 = (570 - 570); (551 - 549) >= FToZYFv0; FToZYFv0++)
            for (acQub8YZLCM = 0; acQub8YZLCM <= (593 - 591); acQub8YZLCM++)
                if (eQhv1Co6q != FToZYFv0 &&eQhv1Co6q != acQub8YZLCM && FToZYFv0 != acQub8YZLCM) {
                    gtTW9LdaNqYv = rdFyY1A = nqtWI8a = 2;
                    if (eQhv1Co6q < FToZYFv0) {
                        nqtWI8a--;
                        gtTW9LdaNqYv--;
                    }
                    else
                        rdFyY1A--;
                    if (acQub8YZLCM < eQhv1Co6q)
                        rdFyY1A--;
                    if (FToZYFv0 < acQub8YZLCM)
                        nqtWI8a--;
                    if (gtTW9LdaNqYv != rdFyY1A && rdFyY1A != nqtWI8a && nqtWI8a != gtTW9LdaNqYv) {
                        Z5EHcIi[gtTW9LdaNqYv] = 'A';
                        Z5EHcIi[rdFyY1A] = 'B';
                        Z5EHcIi[nqtWI8a] = 'C';
                        for (QvNhlIHiT = 0; QvNhlIHiT <= 2; QvNhlIHiT++) {
                            cout << Z5EHcIi[QvNhlIHiT];
                        }
                    }
                }
    return 0;
}

