int main () {
    double  pq0iLved5V7 = (63 - 63), LQzLc8u32 = (128 - 128);
    int Iyfk19hWHv [301], ov8K0pQ [301];
    int tnGfwlC5S = (839 - 839), pybZTkrAW = (571 - 571), mHKxT4DFc = (450 - 450), Rgqfuax1 = (452 - 452);
    memset (Iyfk19hWHv, (979 - 979), sizeof (Iyfk19hWHv));
    memset (ov8K0pQ, (106 - 106), sizeof (ov8K0pQ));
    cin >> tnGfwlC5S;
    for (pybZTkrAW = (360 - 360); pybZTkrAW < tnGfwlC5S; pybZTkrAW++)
        cin >> Iyfk19hWHv[pybZTkrAW];
    for (pybZTkrAW = (24 - 24); tnGfwlC5S > pybZTkrAW; pybZTkrAW++)
        mHKxT4DFc = mHKxT4DFc + Iyfk19hWHv[pybZTkrAW];
    pq0iLved5V7 = (double ) mHKxT4DFc / tnGfwlC5S;
    for (pybZTkrAW = (631 - 631); tnGfwlC5S > pybZTkrAW; pybZTkrAW++)
        if (LQzLc8u32 < fabs (Iyfk19hWHv[pybZTkrAW] - pq0iLved5V7))
            LQzLc8u32 = fabs (Iyfk19hWHv[pybZTkrAW] - pq0iLved5V7);
    for (pybZTkrAW = 0; tnGfwlC5S > pybZTkrAW; pybZTkrAW++)
        if (0.00001 > fabs (fabs (Iyfk19hWHv[pybZTkrAW] - pq0iLved5V7) - LQzLc8u32)) {
            ov8K0pQ[Rgqfuax1] = Iyfk19hWHv[pybZTkrAW];
            Rgqfuax1++;
        }
    if (Rgqfuax1 == 2) {
        if (ov8K0pQ[(656 - 655)] > ov8K0pQ[0])
            cout << ov8K0pQ[0] << "," << ov8K0pQ[(848 - 847)];
        else
            cout << ov8K0pQ[1] << "," << ov8K0pQ[0];
    }
    else
        cout << ov8K0pQ[0];
    return 0;
}

