int main () {
    int sumA;
    int swbt6WZqX4N;
    int JiLZSzFk4;
    int GyblYJ;
    int oEdpkhW1g;
    int BIRthFHp;
    sumA = (oEdpkhW1g > GyblYJ) + (BIRthFHp == GyblYJ);
    swbt6WZqX4N = (GyblYJ > oEdpkhW1g) + (GyblYJ > BIRthFHp);
    JiLZSzFk4 = (BIRthFHp > oEdpkhW1g) + (oEdpkhW1g > GyblYJ);
    if (GyblYJ > oEdpkhW1g && oEdpkhW1g > BIRthFHp &&sumA < swbt6WZqX4N && swbt6WZqX4N < JiLZSzFk4)
        cout << "CBA" << endl;
    if (GyblYJ > BIRthFHp &&BIRthFHp > oEdpkhW1g && sumA < JiLZSzFk4 &&JiLZSzFk4 < swbt6WZqX4N)
        cout << "BCA" << endl;
    if (oEdpkhW1g > GyblYJ &&GyblYJ > BIRthFHp &&swbt6WZqX4N < sumA && sumA < JiLZSzFk4)
        cout << "CAB" << endl;
    if (oEdpkhW1g > BIRthFHp &&BIRthFHp > GyblYJ &&swbt6WZqX4N < JiLZSzFk4 &&JiLZSzFk4 < sumA)
        cout << "ACB" << endl;
    if (BIRthFHp > GyblYJ &&GyblYJ > oEdpkhW1g && JiLZSzFk4 < sumA && sumA < swbt6WZqX4N)
        cout << "BAC" << endl;
    if (BIRthFHp > oEdpkhW1g && oEdpkhW1g > GyblYJ &&JiLZSzFk4 < swbt6WZqX4N && swbt6WZqX4N < sumA)
        cout << "ABC" << endl;
    return 0;
}

