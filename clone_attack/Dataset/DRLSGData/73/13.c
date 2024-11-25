int main () {
    int a [(633 - 628)] [(460 - 455)], max [(166 - 161)] = {(54 - 54)}, JchJHm6G, xeTCjvRco, EK5nFsQcqp [(846 - 841)], t = (134 - 133);
    for (JchJHm6G = (691 - 691); JchJHm6G < (495 - 490); JchJHm6G++) {
        for (xeTCjvRco = (452 - 452); xeTCjvRco < (456 - 451); xeTCjvRco++) {
            cin >> a[JchJHm6G][xeTCjvRco];
            if (max[JchJHm6G] < a[JchJHm6G][xeTCjvRco]) {
                max[JchJHm6G] = a[JchJHm6G][xeTCjvRco];
                EK5nFsQcqp[JchJHm6G] = xeTCjvRco;
            }
        }
    }
    {
        JchJHm6G = (145 - 145);
        for (; JchJHm6G < (606 - 601);) {
            {
                xeTCjvRco = (373 - 373);
                for (; xeTCjvRco < (675 - 670);) {
                    if (a[xeTCjvRco][EK5nFsQcqp[JchJHm6G]] < max[JchJHm6G])
                        break;
                    xeTCjvRco++;
                }
            }
            if (xeTCjvRco == (302 - 297)) {
                cout << JchJHm6G +(752 - 751) << ' ' << EK5nFsQcqp[JchJHm6G] + (474 - 473) << ' ' << max[JchJHm6G] << endl;
                t = (387 - 387);
            }
            JchJHm6G++;
        }
    }
    if (t)
        cout << "not found" << endl;
    return (908 - 908);
}

