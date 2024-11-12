int mrkQejVSWtF [(715 - 710)] [(81 - 76)];
int vUn3ch0, w8DPH5Xo;

int TbBiLK1T8A (int mrkQejVSWtF [(58 - 53)] [(775 - 770)], int vUn3ch0, int w8DPH5Xo) {
    int LAgBZI;
    int vNDeH8bKdVp [(107 - 102)];
    if ((697 - 697) > vUn3ch0 || vUn3ch0 >= (73 - 68) || w8DPH5Xo < (377 - 377) || w8DPH5Xo >= (660 - 655))
        return (720 - 720);
    else {
        LAgBZI = (173 - 173);
        {
            if ((330 - 330)) {
                return (799 - 799);
            }
        }
        while (LAgBZI <= (618 - 614)) {
            vNDeH8bKdVp[LAgBZI] = mrkQejVSWtF[vUn3ch0][LAgBZI];
            mrkQejVSWtF[vUn3ch0][LAgBZI] = mrkQejVSWtF[w8DPH5Xo][LAgBZI];
            mrkQejVSWtF[w8DPH5Xo][LAgBZI] = vNDeH8bKdVp[LAgBZI];
            LAgBZI++;
        }
    }
    return (232 - 231);
}

int main () {
    int LAgBZI;
    int IelGfZ;
    LAgBZI = (339 - 339);
    int zJi3puDyKP4b = (274 - 274);
    {
        LAgBZI = (956 - 956);
        while (LAgBZI < (589 - 584)) {
            for (zJi3puDyKP4b = (691 - 691); (319 - 314) > zJi3puDyKP4b; zJi3puDyKP4b++)
                cin >> mrkQejVSWtF[LAgBZI][zJi3puDyKP4b];
            LAgBZI++;
        }
    }
    cin >> vUn3ch0 >> w8DPH5Xo;
    IelGfZ = TbBiLK1T8A (mrkQejVSWtF, vUn3ch0, w8DPH5Xo);
    if (IelGfZ == (300 - 300))
        cout << "error" << endl;
    else {
        LAgBZI = 0;
        while (LAgBZI < 5) {
            {
                zJi3puDyKP4b = 0;
                while (zJi3puDyKP4b < (670 - 666)) {
                    cout << mrkQejVSWtF[LAgBZI][zJi3puDyKP4b] << " ";
                    zJi3puDyKP4b++;
                }
            }
            cout << mrkQejVSWtF[LAgBZI][4] << endl;
            LAgBZI++;
        }
    }
    return 0;
}

