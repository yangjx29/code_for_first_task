int main () {
    int yeWQnJXGwi6h, u1BsXLv, QOHbxkvQstKh [100] [100];
    cin >> u1BsXLv >> yeWQnJXGwi6h;
    {
        int Qc61wrS = 0;
        for (; u1BsXLv > Qc61wrS;) {
            {
                int fBtNewuHo1a = 0;
                for (; fBtNewuHo1a < yeWQnJXGwi6h;) {
                    cin >> QOHbxkvQstKh[Qc61wrS][fBtNewuHo1a];
                    fBtNewuHo1a = fBtNewuHo1a + 1;
                }
            }
            Qc61wrS = Qc61wrS +1;
        }
    }
    const  int Zwc6kfjJEvX [4] [2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    int JHntIP58MFs2 = 0, PKXlMLIrJfp [4] = {yeWQnJXGwi6h, u1BsXLv - 1, yeWQnJXGwi6h - 1, u1BsXLv - 2}, dGk9qcUr = PKXlMLIrJfp[JHntIP58MFs2], zVoRfs4FmQ [2] = {0, 0}, TxYO3vk = 1;
    for (; dGk9qcUr > 0;) {
        {
            int Qc61wrS = 0 + TxYO3vk;
            while (Qc61wrS < dGk9qcUr) {
                cout << QOHbxkvQstKh[zVoRfs4FmQ[0]][zVoRfs4FmQ[1]] << endl;
                zVoRfs4FmQ[0] = zVoRfs4FmQ[0] + Zwc6kfjJEvX[JHntIP58MFs2][0];
                zVoRfs4FmQ[1] = zVoRfs4FmQ[1] + Zwc6kfjJEvX[JHntIP58MFs2][1];
                ++Qc61wrS;
            }
        }
        PKXlMLIrJfp[JHntIP58MFs2] = PKXlMLIrJfp[JHntIP58MFs2] - 2;
        JHntIP58MFs2 = (JHntIP58MFs2 +1) % 4;
        dGk9qcUr = PKXlMLIrJfp[JHntIP58MFs2];
        TxYO3vk = 0;
    }
    cout << QOHbxkvQstKh[zVoRfs4FmQ[0]][zVoRfs4FmQ[1]] << endl;
    return 0;
}

