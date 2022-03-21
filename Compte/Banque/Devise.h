#pragma once
namespace Banque {
	class Devise
	{
	private:
		double valeur;
	public:
		Devise(double val);
		bool operator>= (const Devise& d) const;
		bool operator> (const Devise& d) const;
		Devise operator-(const Devise& d);
		Devise operator+(const Devise& d);
		Devise operator*(double d);
		Devise operator/(double d);
		void afficher() const;
		~Devise();
	};
};