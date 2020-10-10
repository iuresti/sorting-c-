class Comparator
{
    public:
    template <typename T>
    // Como no sabes qué vas a recibir y sabes que no vas a modificar los datos que recibas, deberías especificar que son refencias constantes
    int compare(const T &, const T &);
};
