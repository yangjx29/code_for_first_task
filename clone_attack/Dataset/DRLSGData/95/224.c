int main () {
    char prNEVU [(557 - 477)];
    char mXT4ftdWbI [(457 - 377)];
    gets (mXT4ftdWbI);
    gets (prNEVU);
    char eLestXp2f;
    for (eLestXp2f = (841 - 841); (864 - 784) > eLestXp2f; eLestXp2f = eLestXp2f + (482 - 481)) {
        if (mXT4ftdWbI[eLestXp2f] >= (384 - 287))
            mXT4ftdWbI[eLestXp2f] = mXT4ftdWbI[eLestXp2f] - (297 - 265);
        if (prNEVU[eLestXp2f] >= (409 - 312))
            prNEVU[eLestXp2f] = prNEVU[eLestXp2f] - (937 - 905);
    }
    for (eLestXp2f = 0; (681 - 601) > eLestXp2f; eLestXp2f = eLestXp2f + 1) {
        if (!('\0' != mXT4ftdWbI[eLestXp2f]) || !('\0' != prNEVU[eLestXp2f])) {
            cout << '=' << endl;
            break;
        }
        if (mXT4ftdWbI[eLestXp2f] == prNEVU[eLestXp2f])
            continue;
        else {
            if (mXT4ftdWbI[eLestXp2f] > prNEVU[eLestXp2f]) {
                cout << '>' << endl;
                break;
            }
            if (mXT4ftdWbI[eLestXp2f] < prNEVU[eLestXp2f]) {
                cout << '<' << endl;
                break;
            }
        }
    }
}

