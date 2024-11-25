int main () {
    int h5xPMGHc [(1056 - 955)] [101];
    int group;
    group = 0;
    int hRYXFjIpoMUc = 0, EmIEi3 = 0;
    int (*AV6ySZ) [101];
    int NUE7KVio3ps, DPheFJryWc, PcNWEyzos1 = 0;
    AV6ySZ = h5xPMGHc;
    cin >> group;
    while (group = group - 1) {
        cin >> hRYXFjIpoMUc >> EmIEi3;
        {
            NUE7KVio3ps = 0;
            while (NUE7KVio3ps < hRYXFjIpoMUc) {
                for (DPheFJryWc = 0; DPheFJryWc < EmIEi3; DPheFJryWc++)
                    cin >> *(*(AV6ySZ +NUE7KVio3ps) + DPheFJryWc);
                NUE7KVio3ps = NUE7KVio3ps +1;
            };
        }
        PcNWEyzos1 = 0;
        if (hRYXFjIpoMUc == (412 - 411) && EmIEi3 == (254 - 253))
            PcNWEyzos1 = **AV6ySZ;
        else {
            {
                NUE7KVio3ps = 0;
                while (NUE7KVio3ps < EmIEi3) {
                    PcNWEyzos1 = PcNWEyzos1 +*(*AV6ySZ+NUE7KVio3ps);
                    if (hRYXFjIpoMUc > 1)
                        PcNWEyzos1 = PcNWEyzos1 +*(*(AV6ySZ +hRYXFjIpoMUc - 1) + NUE7KVio3ps);
                    NUE7KVio3ps++;
                };
            }
            for (NUE7KVio3ps = 1; NUE7KVio3ps <= hRYXFjIpoMUc - 2; NUE7KVio3ps = NUE7KVio3ps +1) {
                PcNWEyzos1 = PcNWEyzos1 +*(*(AV6ySZ +NUE7KVio3ps));
                if (EmIEi3 > 1)
                    PcNWEyzos1 = PcNWEyzos1 +*(*(AV6ySZ +NUE7KVio3ps) + EmIEi3 -1);
            };
        }
        cout << PcNWEyzos1 << endl;
    };
}

