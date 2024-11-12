int main () {
    char njDUtMwG [(603 - 502)], jfHdCXUj [(1006 - 905)];
    int iGuWTAesVRdo, oyeEKZVI1, O2uio1af7Nb = (252 - 252), d0UL7f = (846 - 846), ivz9huiEGo, FBsom2dIJvD, vfImhTR [(278 - 177)] = {(592 - 592)}, iS4DBqk8IN [(1070 - 969)] = {(414 - 414)};
    cin >> iGuWTAesVRdo;
    for (oyeEKZVI1 = (286 - 286); oyeEKZVI1 < iGuWTAesVRdo; oyeEKZVI1 = oyeEKZVI1 + 1) {
        for (O2uio1af7Nb = (354 - 354); O2uio1af7Nb < 101; O2uio1af7Nb = O2uio1af7Nb +1) {
            vfImhTR[O2uio1af7Nb] = (231 - 231);
            iS4DBqk8IN[O2uio1af7Nb] = (480 - 480);
        }
        cin.get ();
        cin.getline (njDUtMwG, 101);
        cin.getline (jfHdCXUj, 101);
        ivz9huiEGo = strlen (njDUtMwG);
        FBsom2dIJvD = strlen (jfHdCXUj);
        for (O2uio1af7Nb = ivz9huiEGo - (653 - 652), d0UL7f = (235 - 235); O2uio1af7Nb >= (563 - 563); O2uio1af7Nb = O2uio1af7Nb -1)
            vfImhTR[d0UL7f++] = njDUtMwG[O2uio1af7Nb] - '0';
        for (O2uio1af7Nb = FBsom2dIJvD -(166 - 165), d0UL7f = (266 - 266); O2uio1af7Nb >= 0; O2uio1af7Nb = O2uio1af7Nb -1)
            iS4DBqk8IN[d0UL7f++] = jfHdCXUj[O2uio1af7Nb] - '0';
        for (O2uio1af7Nb = 0; O2uio1af7Nb < ivz9huiEGo; O2uio1af7Nb = O2uio1af7Nb +1) {
            vfImhTR[O2uio1af7Nb] -= iS4DBqk8IN[O2uio1af7Nb];
            if (vfImhTR[O2uio1af7Nb] < 0) {
                vfImhTR[O2uio1af7Nb] += 10;
                vfImhTR[O2uio1af7Nb +(557 - 556)] -= 1;
            }
        }
        if (vfImhTR[ivz9huiEGo - 1] == 0) {
            for (O2uio1af7Nb = ivz9huiEGo - 2; O2uio1af7Nb >= 0; O2uio1af7Nb = O2uio1af7Nb -1)
                cout << vfImhTR[O2uio1af7Nb];
            cout << endl;
        }
        else {
            for (O2uio1af7Nb = ivz9huiEGo - 1; O2uio1af7Nb >= 0; O2uio1af7Nb = O2uio1af7Nb -1)
                cout << vfImhTR[O2uio1af7Nb];
            cout << endl;
        }
    }
    return 0;
}

