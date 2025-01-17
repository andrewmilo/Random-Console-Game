#ifndef _PLANEDND_
#define _PLANEDND_

#include "Hero.h"

class PlaneDND {
	
	private:
		Hero* hero;
		const char* SAVE_PATH;
		volatile bool live;
		unsigned int turn; // turn number
		int difficulty;
	
	public:
		void welcome( void ) const;
		void start( void );
		void get_hero( void );
		void de_serialize( void );
		void create_hero( void );
		void choose_difficulty( void );
		void set_difficulty( int );
		void round_event( void );
		int get_difficulty( void );
		unsigned int get_turn( void ) const;
		void set_turn( unsigned int );
		inline void save( void );
		void loop( void );
		inline void toggle_game_state( void );
		inline void print_stats( void ) const;
		inline void pause( void );
		inline void resume( void );
		void print_message( const std::string, 
								int, 
								int) const;
		inline void print_help( void ) const;
		PlaneDND();
		~PlaneDND();
};

#endif