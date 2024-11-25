int main () {
    int I8yoUA [100000];
    int BjTQh8dpCsSZ, mwprIta5eK, EspEJPlBtgD, j = 0, m = 0;
    cin >> BjTQh8dpCsSZ;
    {
        mwprIta5eK = 0;
        while (BjTQh8dpCsSZ -(743 - 742) >= mwprIta5eK) {
            cin >> I8yoUA[mwprIta5eK];
            mwprIta5eK = mwprIta5eK + 1;
        }
    }
    cin >> EspEJPlBtgD;
    {
        mwprIta5eK = 0;
        while (BjTQh8dpCsSZ -1 >= mwprIta5eK) {
            if (I8yoUA[mwprIta5eK] != EspEJPlBtgD)
                m = m + 1;
            mwprIta5eK = mwprIta5eK + 1;
        }
    }
    mwprIta5eK = 0;
    do {
        if (I8yoUA[mwprIta5eK] != EspEJPlBtgD) {
            j = j + 1;
            if (j < m)
                cout << I8yoUA[mwprIta5eK] << " ";
            else
                cout << I8yoUA[mwprIta5eK] << endl;
        }
        mwprIta5eK = mwprIta5eK + 1;
    }
    while (mwprIta5eK <= BjTQh8dpCsSZ -1);
    return 0;
}

