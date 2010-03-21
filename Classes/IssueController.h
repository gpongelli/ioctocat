#import <UIKit/UIKit.h>
#import "GHIssue.h"


@class LabeledCell, TextCell, CommentCell, IssuesController;

@interface IssueController : UITableViewController <UIActionSheetDelegate, GHResourceDelegate> {
  @private
	GHIssue *issue;
	IssuesController *listController;
	IBOutlet UIView *tableHeaderView;
	IBOutlet UILabel *createdLabel;
	IBOutlet UILabel *updatedLabel;
	IBOutlet UILabel *voteLabel;
	IBOutlet UILabel *titleLabel;
    IBOutlet UILabel *issueNumber;
	IBOutlet UIImageView *iconView;
	IBOutlet UITableViewCell *loadingCell;
	IBOutlet UITableViewCell *noCommentsCell;
	IBOutlet LabeledCell *createdCell;
	IBOutlet LabeledCell *updatedCell;
	IBOutlet TextCell *descriptionCell;
	IBOutlet CommentCell *commentCell;
}

- (id)initWithIssue:(GHIssue *)theIssue andIssuesController:(IssuesController *)theController;
- (IBAction)showActions:(id)sender;

@end