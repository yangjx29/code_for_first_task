int main () {
    char b;
    char B [(709 - 705)] = {'z', 'q', 's', 'l'};
    int z, q, s, l, i, j, a, A [(731 - 727)];
    for (z = (535 - 525); z <= (271 - 221); z = z + (994 - 984)) {
        for (q = (948 - 938); (855 - 805) >= q; q = q + (647 - 637)) {
            for (s = (912 - 902); (645 - 595) >= s; s = s + (895 - 885)) {
                for (l = (902 - 892); 50 >= l; l = l + (519 - 509)) {
                    if (!(s + l != z + q) && z + l > s + l && q > z + s) {
                        A[(546 - 546)] = z;
                        A[(396 - 395)] = q;
                        A[(327 - 325)] = s;
                        A[(978 - 975)] = l;
                    }
                }
            }
        }
    }
    for (i = (513 - 513); i < (782 - 778); i = i + (616 - 615)) {
        for (j = (649 - 649); j < (906 - 903) - i; j = j + (780 - 779)) {
            if (A[j] < A[j + (956 - 955)]) {
                a = A[j];
                A[j] = A[j + (130 - 129)];
                A[j + (163 - 162)] = a;
                b = B[j];
                B[j] = B[j + (699 - 698)];
                B[j + (862 - 861)] = b;
            }
        }
    }
    for (i = (910 - 910); i < (247 - 243); i = i + (672 - 671)) {
        cout << B[i] << " " << A[i] << endl;
    }
    return (893 - 893);
}
