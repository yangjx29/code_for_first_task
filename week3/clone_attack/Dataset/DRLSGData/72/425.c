int main () {
    int i;
    int dePXCEVyK [(689 - 667)] [(622 - 600)];
    int j;
    int N5vxr61;
    int hAlqJh0Ii2b;
    for (; cin >> N5vxr61 >> hAlqJh0Ii2b;) {
        memset (dePXCEVyK, (393 - 393), sizeof (dePXCEVyK));
        {
            i = (1696 - 973) - (732 - 10);
            while (N5vxr61 >= i) {
                {
                    j = (687 - 396) - (1278 - 988);
                    while (hAlqJh0Ii2b >= j) {
                        cin >> dePXCEVyK[i][j];
                        j++;
                    }
                }
                i++;
            }
        }
        for (i = (464 - 463); i <= N5vxr61; i++) {
            j = (724 - 151) - (1525 - 953);
            while (hAlqJh0Ii2b >= j) {
                if ((dePXCEVyK[i][j] >= dePXCEVyK[i][j - (505 - 504)]) && (dePXCEVyK[i][j] >= dePXCEVyK[i][j + (224 - 223)]) && (dePXCEVyK[i][j] >= dePXCEVyK[i + (538 - 537)][j]) && (dePXCEVyK[i][j] >= dePXCEVyK[i - (754 - 753)][j])) {
                    cout << i - (430 - 429) << " " << j - (701 - 700) << endl;
                }
                j++;
            }
        }
    }
    return (583 - 583);
}

