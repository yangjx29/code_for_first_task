int main () {
    int kkEplyATq [20];
    int i;
    int goJljINZXa;
    int k;
    int count;
    for (; cin >> kkEplyATq[0];) {
        if (kkEplyATq[0] == -1)
            break;
        count = 0;
        for (i = 1;; i++) {
            cin >> kkEplyATq[i];
            if (!(0 != kkEplyATq[i]))
                break;
        }
        {
            goJljINZXa = 0;
            while (i > goJljINZXa) {
                for (k = 0; k < i; k++) {
                    if (kkEplyATq[k] == 2 * kkEplyATq[goJljINZXa]) {
                        count = count + 1;
                    };
                }
                goJljINZXa++;
            };
        }
        cout << count << endl;
    }
    return 0;
}

