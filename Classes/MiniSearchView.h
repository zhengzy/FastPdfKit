//
//  MiniSearchView.h
//  FastPDFKitTest
//
//  Created by Nicolò Tosi on 1/17/11.
//  Copyright 2011 com.mobfarm. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SearchResultDelegate.h"

@class SearchManager;
@class DocumentViewController;
@class MFTextItem;
@class SearchResultView;

@interface MiniSearchView : UIView <SearchResultDelegate> {
	
	// UI elements.
	UIButton *nextButton;
	UIButton *prevButton;
	UIButton *cancelButton;
	UIButton *fullButton;
	
	// This is the same content view presented in the search result table view.
	SearchResultView *searchResultView;
 	
	SearchManager *dataSource;	// Data sources for the serarch.
	DocumentViewController *documentDelegate;	// Delegate.
	
	NSMutableArray *searchResults;	// Local copy of the search results.
	long int currentSearchResultIndex;	// Current index of the search result.
}

@property (nonatomic,assign) DocumentViewController * documentDelegate;
@property (nonatomic,assign) SearchManager *dataSource;

@property (nonatomic,retain) UIButton *nextButton;
@property (nonatomic,retain) UIButton *prevButton;
@property (nonatomic,retain) UIButton *cancelButton;
@property (nonatomic,retain) UIButton *fullButton;

@property (nonatomic,retain) UILabel *pageLabel;
@property (nonatomic,retain) UILabel *snippetLabel;

@property (nonatomic,retain) SearchResultView *searchResultView;

-(void)reloadData;
-(void)setCurrentResultIndex:(NSUInteger)index;
-(void)setCurrentTextItem:(MFTextItem *)item;

@end
