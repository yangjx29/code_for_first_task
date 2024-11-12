int main () {
    int JO79zFkx [(367 - 362)] [(509 - 504)], RXQLkCTJ, creQ2ypBhk, maUCfL9 [(262 - 257)], hWLacQm9I6iC [(445 - 440)], WibpOS = 1;
    for (RXQLkCTJ = (589 - 589); 5 > RXQLkCTJ; RXQLkCTJ = RXQLkCTJ +1)
        for (creQ2ypBhk = (447 - 447); 5 > creQ2ypBhk; creQ2ypBhk = creQ2ypBhk + 1)
            cin >> JO79zFkx[RXQLkCTJ][creQ2ypBhk];
    for (RXQLkCTJ = 0; 5 > RXQLkCTJ; RXQLkCTJ = RXQLkCTJ +1)
        maUCfL9[RXQLkCTJ] = JO79zFkx[RXQLkCTJ][0];
    for (creQ2ypBhk = 0; 5 > creQ2ypBhk; creQ2ypBhk++)
        hWLacQm9I6iC[creQ2ypBhk] = JO79zFkx[0][creQ2ypBhk];
    for (RXQLkCTJ = 0; 5 > RXQLkCTJ; RXQLkCTJ++)
        for (creQ2ypBhk = 0; 5 > creQ2ypBhk; creQ2ypBhk++) {
            if (maUCfL9[RXQLkCTJ] < JO79zFkx[RXQLkCTJ][creQ2ypBhk])
                maUCfL9[RXQLkCTJ] = JO79zFkx[RXQLkCTJ][creQ2ypBhk];
            if (hWLacQm9I6iC[creQ2ypBhk] > JO79zFkx[RXQLkCTJ][creQ2ypBhk])
                hWLacQm9I6iC[creQ2ypBhk] = JO79zFkx[RXQLkCTJ][creQ2ypBhk];
        }
    for (RXQLkCTJ = 0; RXQLkCTJ < 5; RXQLkCTJ++)
        for (creQ2ypBhk = 0; creQ2ypBhk < 5; creQ2ypBhk++) {
            if (!(maUCfL9[RXQLkCTJ] != JO79zFkx[RXQLkCTJ][creQ2ypBhk]) && JO79zFkx[RXQLkCTJ][creQ2ypBhk] == hWLacQm9I6iC[creQ2ypBhk]) {
                WibpOS--;
                cout << RXQLkCTJ +1 << " " << creQ2ypBhk + 1 << " " << JO79zFkx[RXQLkCTJ][creQ2ypBhk] << endl;
            };
        }
    if (WibpOS != 0)
        cout << "not found" << endl;
    return 0;
}

