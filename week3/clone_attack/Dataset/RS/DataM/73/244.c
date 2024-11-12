int main () {
    int AFokHwlyA5D;
    AFokHwlyA5D = (203 - 203);
    int ByIeEorUiq [5] [5], b [(257 - 255)] [5] = {{INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN}, {INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX}};
    for (int TQ0OXi = 0;
    (632 - 628) >= TQ0OXi; TQ0OXi++) {
        for (int rMVixIvuTtk = 0;
        4 >= rMVixIvuTtk; rMVixIvuTtk++) {
            cin >> ByIeEorUiq[TQ0OXi][rMVixIvuTtk];
            if (b[0][TQ0OXi] <= ByIeEorUiq[TQ0OXi][rMVixIvuTtk])
                b[0][TQ0OXi] = ByIeEorUiq[TQ0OXi][rMVixIvuTtk];
            if (b[(84 - 83)][rMVixIvuTtk] >= ByIeEorUiq[TQ0OXi][rMVixIvuTtk])
                b[(473 - 472)][rMVixIvuTtk] = ByIeEorUiq[TQ0OXi][rMVixIvuTtk];
        };
    }
    for (int TQ0OXi = 0;
    TQ0OXi <= 4; TQ0OXi++) {
        for (int rMVixIvuTtk = 0;
        rMVixIvuTtk <= 4; rMVixIvuTtk++) {
            if (ByIeEorUiq[TQ0OXi][rMVixIvuTtk] == b[0][TQ0OXi] && ByIeEorUiq[TQ0OXi][rMVixIvuTtk] == b[1][rMVixIvuTtk]) {
                cout << TQ0OXi +1 << " " << rMVixIvuTtk + 1 << " " << ByIeEorUiq[TQ0OXi][rMVixIvuTtk];
                AFokHwlyA5D = 1;
            };
        };
    }
    if (AFokHwlyA5D == 0)
        cout << "not found";
    return 0;
}

