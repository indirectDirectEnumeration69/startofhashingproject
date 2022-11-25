// HashAlgorithmfordataencryption.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>;

//internet encryption key for sha256


static class Key {
	virtual void encryptKey() = 0;
};
	class KeyGeneration:Key {
	private:
		template <typename F>
		static const F key; //param will be slightly insecure actually alot change this asap lol-me again ernest the idiot!
	public:template <typename A1>
		
		std::string encryptionKey( A1 keynow1) {
			{ 
				A1 keynow;  //never access key variable until keynow has been encrypted then pass to key variable;
				 keynow = "";
				std::cout << "Enter a key for encryption: ";
				std::cin >> keynow;
				keynow1 = keynow;
				if (keynow != keynow1) {
					delete& keynow;
					delete& keynow1;
					delete&* this; //probably does the same thing but might as well
					delete this;
				}
				//do something here to encrypt keynow1
				return keynow1;
			}
		}
	};
	class Hash {
		template <typename T>
		T Hashagain() {
			{
			 virtual T HashingResult();
			}
		}
		 //template for hash function
	protected:
		static class Hashalgopart1 {
			virtual void algo1() = 0;
			virtual void mix() = 0;
			virtual int roundcount() = 0;
			virtual std::string roundgeneration() = 0;
		};
	};
	class Hashingcapture:Hash {
		template <typename T>
		T HashingResult() {
			{
				T HashingResult;
				HashingResult = nullptr;
				std::cout << "Enter a string to hash: ";
				std::cin >> HashingResult;
				return HashingResult;
			}
		}
	private:
		class Hashsector :Hashalgopart1 {
			Hash* HashingResult() {
				Hash* hash = new Hash();
				return hash;
			}
		};
		class HashSecurity {
		private:
			
		public:
			Hashingcapture* hashthekey() {
				
			}
		};
		};
	class Singlecall:Hashingcapture{
	public:
		static Singlecall* const singleton;
	private:
		Singlecall(void) {}
	};
	
	Singlecall* const Singlecall::singleton = new Singlecall();
int main()
{
	struct HashStructure
	{
		std::string key; //maybe use generic instead of static explicit types for more obfuscation;
		std::string hash;
	private:
		virtual int callHashing() = 0;
	};
   static KeyGeneration* keyA{};
   std::string keyval;
   std::string hh = keyA->encryptionKey<std::string>(keyval);
   std::cout << "This is the final key value: " << hh;
   delete keyA;
   switch(keyval.size() || keyval.empty() != 0) {
	   delete& keyval;
   }
   


   //after key is passed to next function delete all the variables not going to be used;
   //always keep changing the variable holding the next value
   
}

