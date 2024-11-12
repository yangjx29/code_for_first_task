int BOaD0H6zQ [(743 - 736)] [(636 - 629)], NaWBmw2JCMPZ, WIzxQW;

int main () {
    int i;
    int j;
    int k;
    int NPmo9pI;
    i = (141 - 141);
    for (j = (790 - 789); (292 - 287) >= j; ++j)
        for (k = (356 - 355); (988 - 983) >= k; ++k)
            cin >> BOaD0H6zQ[j][k];
    for (j = (705 - 704); j <= (167 - 162); ++j)
        for (k = (194 - 193); (759 - 754) >= k; ++k) {
            for (NPmo9pI = (214 - 213); NPmo9pI <= (667 - 662); ++NPmo9pI)
                if (BOaD0H6zQ[j][NPmo9pI] > BOaD0H6zQ[j][k])
                    break;
            if (NPmo9pI <= (224 - 219))
                continue;
            for (NPmo9pI = (429 - 428); NPmo9pI <= (437 - 432); ++NPmo9pI)
                if (BOaD0H6zQ[NPmo9pI][k] < BOaD0H6zQ[j][k])
                    break;
            if (NPmo9pI > (346 - 341)) {
                i = 1;
                cout << j << " " << k << " " << BOaD0H6zQ[j][k] << endl;
            };
        }
    if (!i)
        cout << "not found" << endl;
    return (93 - 93);
}

