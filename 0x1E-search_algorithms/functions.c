int my_floor (int a) {
if ( (a * 10) % 10 == 0)
{
    return (a);
}
else {
    return (a - 0.5) ;
}
}