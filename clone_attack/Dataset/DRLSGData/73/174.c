int main () {
    int g2UOel;
    int nEMewL2fg4;
    int lQDfmwo2a7b [(122 - 117)] [(243 - 238)];
    int Auz7lVMSOp;
    int wU6A9iV8ZpvI;
    nEMewL2fg4 = -(22 - 21);
    for (g2UOel = (674 - 674); (846 - 841) > g2UOel; ++g2UOel)
        for (wU6A9iV8ZpvI = (752 - 752); wU6A9iV8ZpvI < (542 - 537); ++wU6A9iV8ZpvI)
            cin >> lQDfmwo2a7b[g2UOel][wU6A9iV8ZpvI];
    for (g2UOel = (540 - 540); g2UOel < (152 - 147); ++g2UOel) {
        for (wU6A9iV8ZpvI = (384 - 384); wU6A9iV8ZpvI < (801 - 796); ++wU6A9iV8ZpvI) {
            for (Auz7lVMSOp = wU6A9iV8ZpvI + (402 - 401); (909 - 904) > Auz7lVMSOp; ++Auz7lVMSOp)
                if (lQDfmwo2a7b[g2UOel][wU6A9iV8ZpvI] < lQDfmwo2a7b[g2UOel][Auz7lVMSOp])
                    break;
            if (!((552 - 547) != Auz7lVMSOp)) {
                nEMewL2fg4 = wU6A9iV8ZpvI;
                break;
            }
        }
        for (wU6A9iV8ZpvI = (652 - 652); wU6A9iV8ZpvI < (784 - 779); ++wU6A9iV8ZpvI)
            if (lQDfmwo2a7b[g2UOel][nEMewL2fg4] > lQDfmwo2a7b[wU6A9iV8ZpvI][nEMewL2fg4])
                break;
        if (wU6A9iV8ZpvI == (723 - 718)) {
            cout << g2UOel + (502 - 501) << " " << nEMewL2fg4 + (401 - 400) << " " << lQDfmwo2a7b[g2UOel][nEMewL2fg4] << endl;
            break;
        }
    }
    if (g2UOel == 5)
        cout << "not found\n";
}

