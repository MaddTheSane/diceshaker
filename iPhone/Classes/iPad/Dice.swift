//
//  Dice.swift
//  Diceshaker
//
//  Created by C.W. Betts on 5/14/15.
//
//

import Foundation

@objc enum DieFaces: Int {
	case Coin = 2
	case D3 = 3
	case D4 = 4
	case D6 = 6
	case D8 = 8
	case D10 = 10
	case D12 = 12
	case D20 = 20
	case D100 = 100
}

struct Dice {
	var numberOfDice: Int
	var numberOfFacesPerDie: Int
}
