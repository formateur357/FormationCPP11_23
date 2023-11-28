#include <cstdio>

unsigned char a = 1;
unsigned char b = 0;
unsigned char aa = 20; /* non nul donc VRAI en logique */
unsigned char bb = 0xAA;
// Ne pas confondre !
/* ! : inverseur logique */
/* ~ : inverseur bit à bit */

// comparaison de nombres flottants
bool sontEgaux(float a, float b)
{
    const float tolerance = 0.00001f;
    return fabs(a - b) < tolerance;
}

int main()
{
    printf("a = %u - !a = %u - ~a = %u (0x%hhX)\n", a, !a, ~a, ~a);
    printf("b = %u - !b = %u - ~b = %u (0x%hhX)\n", b, !b, ~b, ~b);
    printf("aa = %u (0x%hhX) - !aa = %u - ~aa = %u (0x%hhX)\n", aa, aa, !aa, ~aa, ~aa);
    printf("bb = %u (0x%hhX) - !bb = %u - ~bb = %u (0x%hhX)\n", bb, bb, !bb, ~bb, ~bb);

    return 0;
}
