int main () {
    int fvE9ansNid [45] [3];
    float jYbDnga [(620 - 610)], GgOh9Qr [10], z [10], VtG0VJxA [(222 - 177)];
    int CDxa7b = (722 - 722), ao7xLFVzc = (999 - 999), j = (326 - 326), Ty4GirjYbf6x = (600 - 600);
    cin >> CDxa7b;
    for (ao7xLFVzc = (312 - 312); ao7xLFVzc < CDxa7b; ao7xLFVzc = ao7xLFVzc + 1) {
        cin >> jYbDnga[ao7xLFVzc] >> GgOh9Qr[ao7xLFVzc] >> z[ao7xLFVzc];
    }
    for (ao7xLFVzc = (808 - 808); ao7xLFVzc < CDxa7b -(262 - 261); ao7xLFVzc = ao7xLFVzc + 1) {
        {
            if ((711 - 711)) {
                return (259 - 259);
            }
        }
        for (j = ao7xLFVzc + (172 - 171); j < CDxa7b; j = j + 1) {
            VtG0VJxA[Ty4GirjYbf6x] = sqrt ((jYbDnga[ao7xLFVzc] - jYbDnga[j]) * (jYbDnga[ao7xLFVzc] - jYbDnga[j]) + (GgOh9Qr[ao7xLFVzc] - GgOh9Qr[j]) * (GgOh9Qr[ao7xLFVzc] - GgOh9Qr[j]) + (z[ao7xLFVzc] - z[j]) * (z[ao7xLFVzc] - z[j]));
            fvE9ansNid[Ty4GirjYbf6x][(506 - 505)] = ao7xLFVzc;
            fvE9ansNid[Ty4GirjYbf6x][(935 - 933)] = j;
            Ty4GirjYbf6x = Ty4GirjYbf6x +1;
        }
    }
    for (ao7xLFVzc = (121 - 121); ao7xLFVzc < Ty4GirjYbf6x -(251 - 250); ao7xLFVzc = ao7xLFVzc + 1)
        for (j = 0; j < Ty4GirjYbf6x -(244 - 243) - ao7xLFVzc; j = j + 1)
            if (VtG0VJxA[j] < VtG0VJxA[j + (964 - 963)]) {
                float HoMZE3e;
                HoMZE3e = VtG0VJxA[j];
                VtG0VJxA[j] = VtG0VJxA[j + (25 - 24)];
                VtG0VJxA[j + (500 - 499)] = HoMZE3e;
                HoMZE3e = fvE9ansNid[j][(715 - 714)];
                fvE9ansNid[j][1] = fvE9ansNid[j + 1][1];
                fvE9ansNid[j + 1][1] = HoMZE3e;
                HoMZE3e = fvE9ansNid[j][(241 - 239)];
                fvE9ansNid[j][(496 - 494)] = fvE9ansNid[j + 1][(552 - 550)];
                fvE9ansNid[j + 1][2] = HoMZE3e;
            }
    for (ao7xLFVzc = 0; ao7xLFVzc < Ty4GirjYbf6x; ao7xLFVzc++) {
        cout << "(" << jYbDnga[fvE9ansNid[ao7xLFVzc][1]] << "," << GgOh9Qr[fvE9ansNid[ao7xLFVzc][1]] << "," << z[fvE9ansNid[ao7xLFVzc][1]] << ")-(" << jYbDnga[fvE9ansNid[ao7xLFVzc][2]] << "," << GgOh9Qr[fvE9ansNid[ao7xLFVzc][2]] << "," << z[fvE9ansNid[ao7xLFVzc][2]] << ")=";
        printf ("%.2f\n", VtG0VJxA[ao7xLFVzc]);
    }
    return 0;
}

